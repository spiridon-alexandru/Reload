#ifndef IX_PIM_DEFS_H
#define IX_PIM_DEFS_H

/** \brief A hash of the abstract representation of the API described in this file.
 * Identifiers, declarations and definitions are included in the calculation of the hash,
 * but documentation is not.
 */
#define MAIDL_HASH ((int)0xd169f276)

#ifndef DONT_WANT_IX_PIM_TYPEDEFS
#endif
/**
* Each contact commonly includes a name and one or more phone numbers.
* May also include a street address and an email address.
*/
/** @ingroup PIMAPI */
#define MA_PIM_CONTACTS 1

/** @ingroup PIMAPI */
#define MA_PIM_EVENTS 2
/** @ingroup PIMAPI */
#define MA_PIM_TODOS 3
/// bytes
/// the bytes are not null-terminated.
/** @ingroup PIMConsts */
#define MA_PIM_TYPE_BINARY 0

/// int
/** @ingroup PIMConsts */
#define MA_PIM_TYPE_BOOLEAN 1

/// int
/// unix time.
/** @ingroup PIMConsts */
#define MA_PIM_TYPE_DATE 2

/// int
/** @ingroup PIMConsts */
#define MA_PIM_TYPE_INT 3

/// wide-string '\\0'
/** @ingroup PIMConsts */
#define MA_PIM_TYPE_STRING 4

/// int (wide-string '\\0')*
/// the int specifies the number of strings.
/// there is no extra null terminator at the end of the list.
/** @ingroup PIMConsts */
#define MA_PIM_TYPE_STRING_ARRAY 5
/**
* @brief The addresses of the contact. Multiple string arrays. Has \link #MA_PIM_CONTACT_ADDR_POBOX MA_PIM_CONTACT_ADDR \endlink indices.
*
* @validvalue #MA_PIM_TYPE_STRING_ARRAY.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_ADDR_HOME, MA_PIM_ATTR_ADDR_WORK, MA_PIM_ATTR_ADDR_OTHER, MA_PIM_ATTR_ADDR_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_ADDR 100

/**
* @brief The birthday of the contact. Single date.
*
* @validvalue #MA_PIM_TYPE_DATE.
*
* @addsetget
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_BIRTHDAY 101

/**
* @brief Access class. Single integer. May be one of #MA_PIM_CONTACT_CLASS_CONFIDENTIAL, #MA_PIM_CONTACT_CLASS_PRIVATE, or #MA_PIM_CONTACT_CLASS_PUBLIC.
*
* @validvalue #MA_PIM_TYPE_INT.
*
* @addsetget
*
* @platforms Symbian.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_CLASS 102

/**
* @brief The email addresses of the contact. Multiple strings.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_EMAIL_HOME, MA_PIM_ATTR_EMAIL_WORK, MA_PIM_ATTR_EMAIL_MOBILE, MA_PIM_ATTR_EMAIL_OTHER, MA_PIM_ATTR_EMAIL_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_EMAIL 103

/**
* @brief The formatted addresses of the contact. Single string.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @getonly
*
* @attributes MA_PIM_ATTR_FORMATTED_ADDR_HOME, MA_PIM_ATTR_FORMATTED_ADDR_WORK, MA_PIM_ATTR_FORMATTED_ADDR_OTHER, MA_PIM_ATTR_FORMATTED_ADDR_CUSTOM.
*
* @platforms Android.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_FORMATTED_ADDR 104

/**
* @brief The formatted name of the contact. Single string.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @getonly
*
* @platforms Symbian.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_FORMATTED_NAME 105

/**
* @brief The name of the contact. Single string array containing Family name, Given name, Middle name, Prefix,
* Suffix, Phonetic family name, Phonetic given name, Phonetic middle name. Has \link #MA_PIM_CONTACT_NAME_FAMILY MA_PIM_CONTACT_NAME \endlink indices.
*
* @validvalue #MA_PIM_TYPE_STRING_ARRAY.
*
* @getonly
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_NAME 106

/**
* @brief The nickname of the contact. Single string.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_NICKNAME 107

/**
* @brief Supplementary information, or a comment. Multiple string.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_NOTE 108

/**
* @brief The organization name of the contact. Multiple string.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_ORG_WORK, MA_PIM_ATTR_ORG_OTHER, MA_PIM_ATTR_ORG_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_ORG 109

/**
* @brief The contact's photo. A single int representing a data handle. Connected with PHOTO_URL.
*
* @validvalue #MA_PIM_TYPE_INT.
*
* @addsetget
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_PHOTO 110

/**
* @brief The contact's photo url. A single string representing the URL of a photo. Connected with PHOTO.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @setonly
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_PHOTO_URL 111

/**
* @brief The public key of the contact. Connected with PUBLIC_KEY_STRING.
*
* @validvalue #MA_PIM_TYPE_BINARY.
*
* @addsetget
*
* @platforms Symbian.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_PUBLIC_KEY 112

/**
* @brief A string representation of the contact's public key. Connected with PUBLIC_KEY.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @platforms Symbian.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_PUBLIC_KEY_STRING 113

/**
* @brief The revision date of the field. Single date.
*
* @validvalue #MA_PIM_TYPE_DATE.
*
* @getonly
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_REVISION 114

/**
* @brief The telephone numbers of the contact. Multiple strings.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_PHONE_HOME, MA_PIM_ATTR_PHONE_MOBILE, MA_PIM_ATTR_PHONE_HOME_FAX, MA_PIM_ATTR_PHONE_WORK_FAX, MA_PIM_ATTR_PHONE_PAGER, MA_PIM_ATTR_PHONE_IPHONE, MA_PIM_ATTR_PHONE_WORK, MA_PIM_ATTR_PHONE_CALLBACK, MA_PIM_ATTR_PHONE_CAR, MA_PIM_ATTR_PHONE_COMPANY_MAIN, MA_PIM_ATTR_PHONE_ISDN, MA_PIM_ATTR_PHONE_OTHER_FAX, MA_PIM_ATTR_PHONE_RADIO, MA_PIM_ATTR_PHONE_TELEX, MA_PIM_ATTR_PHONE_TTY_TDD, MA_PIM_ATTR_PHONE_WORK_MOBILE, MA_PIM_ATTR_PHONE_WORK_PAGER, MA_PIM_ATTR_PHONE_ASSISTANT, MA_PIM_ATTR_PHONE_MMS, MA_PIM_ATTR_PHONE_OTHER, MA_PIM_ATTR_PHONE_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_TEL 115

/**
* @brief The professional title of the contact inside the organization. Multiple strings.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_TITLE_WORK, MA_PIM_ATTR_TITLE_OTHER, MA_PIM_ATTR_TITLE_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_TITLE 116

/**
* @brief The unique identifier of the contact on the current device. Single string.
*
* @validvalue Single #MA_PIM_TYPE_STRING.
*
* @getonly
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_UID 117

/**
* @brief Uniform Resource Locators associated with the contact. Multiple strings.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_WEBSITE_HOMEPAGE, MA_PIM_ATTR_WEBSITE_BLOG, MA_PIM_ATTR_WEBSITE_PROFILE, MA_PIM_ATTR_WEBSITE_HOME, MA_PIM_ATTR_WEBSITE_WORK, MA_PIM_ATTR_WEBSITE_FTP, MA_PIM_ATTR_WEBSITE_OTHER, MA_PIM_ATTR_WEBSITE_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_URL 118

/**
* @brief The IM addresses of the contact. Multiple arrays. Has \link #MA_PIM_CONTACT_IM_USERNAME MA_PIM_CONTACT_IM \endlink indices.
*
* @validvalue #MA_PIM_TYPE_STRING_ARRAY.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_IM_HOME, MA_PIM_ATTR_IM_WORK, MA_PIM_ATTR_IM_OTHER, MA_PIM_ATTR_IM_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_IM 119

/**
* @brief A relation of the contact.
*
* @validvalue #MA_PIM_TYPE_STRING.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_RELATION_MOTHER, MA_PIM_ATTR_RELATION_FATHER, MA_PIM_ATTR_RELATION_PARENT, MA_PIM_ATTR_RELATION_SISTER, MA_PIM_ATTR_RELATION_BROTHER, MA_PIM_ATTR_RELATION_CHILD, MA_PIM_ATTR_RELATION_FRIEND, MA_PIM_ATTR_RELATION_SPOUSE, MA_PIM_ATTR_RELATION_PARTNER, MA_PIM_ATTR_RELATION_MANAGER, MA_PIM_ATTR_RELATION_ASSISTANT, MA_PIM_ATTR_RELATION_DOMESTIC_PARTNER, MA_PIM_ATTR_RELATION_REFERRED_BY, MA_PIM_ATTR_RELATION_RELATIVE, MA_PIM_ATTR_RELATION_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_RELATION 120

/**
* @brief Information about the organization. Has \link #MA_PIM_CONTACT_ORG_INFO_DEPARTMENT MA_PIM_CONTACT_ORG_INFO \endlink indices.
*
* @validvalue #MA_PIM_TYPE_STRING_ARRAY.
*
* @addsetget
*
* @attributes MA_PIM_ATTR_ORG_INFO_WORK, MA_PIM_ATTR_ORG_INFO_OTHER, MA_PIM_ATTR_ORG_INFO_CUSTOM.
*
* @platforms Android, iOS.
*
*/
/** @ingroup PIMConsts */
#define MA_PIM_FIELD_CONTACT_ORG_INFO 121
/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Post office box number.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_POBOX 0

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Extra info.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_EXTRA 1

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Street name and number.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_STREET 2

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Locality name. (ex. city)
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_LOCALITY 3

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Region name. (ex. province, state or territory)
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_REGION 4

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Postal code.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_POSTALCODE 5

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Country name.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_COUNTRY 6

/// Index for #MA_PIM_FIELD_CONTACT_ADDR. Neighborhood.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ADDR_NEIGHBORHOOD 7
/// Index for #MA_PIM_FIELD_CONTACT_NAME. Family name.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_FAMILY 0

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Given name.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_GIVEN 1

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Alternate/secondary names, if any.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_OTHER 2

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Prefix. (ex. "Dr.")
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_PREFIX 3

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Suffix. (ex. "M.D.")
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_SUFFIX 4

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Phonetic last name.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_PHONETIC_FAMILY 5

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Phonetic first name.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_PHONETIC_GIVEN 6

/// Index for #MA_PIM_FIELD_CONTACT_NAME. Phonetic middle name.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_NAME_PHONETIC_OTHER 7
/// #MA_PIM_TYPE_STRING.
/// Only for Android and iOS devices.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ORG_INFO_DEPARTMENT 0

/// #MA_PIM_TYPE_STRING.
/// Only for Android devices.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ORG_INFO_JOB_DESCRIPTION 1

/// #MA_PIM_TYPE_STRING.
/// Only for Android devices.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ORG_INFO_SYMBOL 2

/// #MA_PIM_TYPE_STRING.
/// Only for Android devices.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ORG_INFO_PHONETIC_NAME 3

/// #MA_PIM_TYPE_STRING.
/// Only for Android devices.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ORG_INFO_OFFICE_LOCATION 4

/// #MA_PIM_TYPE_STRING.
/// Only for Android devices.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_ORG_INFO_PHONETIC_NAME_STYLE 5
/// #MA_PIM_TYPE_STRING.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_USERNAME 0

/// #MA_PIM_TYPE_STRING.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL 1
/// Value for #MA_PIM_FIELD_CONTACT_CLASS.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_CLASS_CONFIDENTIAL 200

/// Value for #MA_PIM_FIELD_CONTACT_CLASS.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_CLASS_PRIVATE 201

/// Value for #MA_PIM_FIELD_CONTACT_CLASS.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_CLASS_PUBLIC 202
/// This constant describes an AIM protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_AIM "AIM"

/// This constant describes a MSN protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_MSN "MSN"

/// This constant describes a Yahoo protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_YAHOO "Yahoo"

/// This constant describes a Skype protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_SKYPE "Skype"

/// This constant describes a QQ protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_QQ "QQ"

/// This constant describes a Google Talk protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_GOOGLE_TALK "GoogleTalk"

/// This constant describes an ICQ protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_ICQ "ICQ"

/// This constant describes a Jabber protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_JABBER "Jabber"

/// This constant describes a NetMeeting protocol.
/** @ingroup PIMConsts */
#define MA_PIM_CONTACT_IM_PROTOCOL_NETMEETING "Netmeeting"
/// The value describes an assistant.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ASST 1

/// Unknown.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_AUTO 2

/// The value describes a fax number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_FAX 4

/// The value describes a home phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_HOME 8

/// The value describes a mobile phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_MOBILE 16

/// Unknown.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_OTHER 32

/// The value describes a pager number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PAGER 64

/// In a field with multiple values, this one is preferred before the others.
/// Only one value per field may be marked PREFERRED. Marking a value PREFERRED
/// causes any other PREFERRED value in the field to become unmarked.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PREFERRED 128

/// The value describes an SMS number?
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_SMS 256

/// The value describes a work phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WORK 512
/// The constant describes a home address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ADDR_HOME 101

/// The constant describes a work address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ADDR_WORK 102

/// The constant describes a different address type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ADDR_OTHER 103

/// The constant describes a custom address type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ADDR_CUSTOM 104
/// The constant describes a home e-mail address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_EMAIL_HOME 201

/// The constant describes a work e-mail address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_EMAIL_WORK 202

/// The constant describes a mobile e-mail address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_EMAIL_MOBILE 203

/// The constant describes a different e-mail address type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_EMAIL_OTHER 204

/// The constant describes a custom e-mail address type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_EMAIL_CUSTOM 205
/// The constant describes a home formatted address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_FORMATTED_ADDR_HOME 301

/// The constant describes a work formatted address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_FORMATTED_ADDR_WORK 302

/// The constant describes a different formatted address type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_FORMATTED_ADDR_OTHER 303

/// The constant describes a custom formatted address type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_FORMATTED_ADDR_CUSTOM 304
/// The constant describes a work organization.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ORG_WORK 401

/// The constant describes a different organization type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ORG_OTHER 402

/// The constant describes a custom organization type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ORG_CUSTOM 403
/// The constant describes a home phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_HOME 501

/// The constant describes a mobile phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_MOBILE 502

/// The constant describes a home fax phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_HOME_FAX 503

/// The constant describes a work fax phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_WORK_FAX 504

/// The constant describes a pager phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_PAGER 505

/// The constant describes an iPhone phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_IPHONE 506

/// The constant describes a work phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_WORK 507

/// The constant describes a callback phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_CALLBACK 508

/// The constant describes a car phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_CAR 509

/// The constant describes a company main phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_COMPANY_MAIN 510

/// The constant describes a ISDN phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_ISDN 511

/// The constant describes a other fax type phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_OTHER_FAX 512

/// The constant describes a radio phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_RADIO 513

/// The constant describes a telex phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_TELEX 514

/// The constant describes a TTY TDD phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_TTY_TDD 515

/// The constant describes a work mobile phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_WORK_MOBILE 516

/// The constant describes a work pager phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_WORK_PAGER 517

/// The constant describes an assistant phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_ASSISTANT 518

/// The constant describes a MMS phone number.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_MMS 519

/// The constant describes a different phone number type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_OTHER 520

/// The constant describes a custom phone number type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_PHONE_CUSTOM 521
/// The constant describes a work title.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_TITLE_WORK 601

/// The constant describes a different title type.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_TITLE_OTHER 602

/// The constant describes a custom title type.
/// The field's label can be set.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_TITLE_CUSTOM 603
/// The constant describes a homepage website.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_HOMEPAGE 701

/// The constant describes a blog website.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_BLOG 702

/// The constant describes a profile website.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_PROFILE 703

/// The constant describes a home website.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_HOME 704

/// The constant describes a work website.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_WORK 705

/// The constant describes a FTP website.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_FTP 706

/// The constant describes a different website type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_OTHER 707

/// The constant describes a custom website type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_WEBSITE_CUSTOM 708
/// The constant describes a home IM address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_IM_HOME 801

/// The constant describes a work IM address.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_IM_WORK 802

/// The constant describes a different IM address type.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_IM_OTHER 803

/// The constant describes a custom IM address type.
/// The field's label can be set.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_IM_CUSTOM 804
/// The constant describes a mother relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_MOTHER 901

/// The constant describes a father relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_FATHER 902

/// The constant describes a parent relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_PARENT 903

/// The constant describes a sister relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_SISTER 904

/// The constant describes a brother relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_BROTHER 905

/// The constant describes a child relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_CHILD 906

/// The constant describes a friend relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_FRIEND 907

/// The constant describes a spouse relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_SPOUSE 908

/// The constant describes a partner relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_PARTNER 909

/// The constant describes a manager relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_MANAGER 910

/// The constant describes a assistant relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_ASSISTANT 911

/// The constant describes a domestic partner relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_DOMESTIC_PARTNER 912

/// The constant describes a referred by relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_REFERRED_BY 913

/// The constant describes a relative relation.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_RELATIVE 914

/// The constant describes a custom relation type.
/// The field's label can be set.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_RELATION_CUSTOM 915
/// The constant describes a work organization.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ORG_INFO_WORK 1001

/// The constant describes a different organization type.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ORG_INFO_OTHER 1002

/// The constant describes a custom organization type.
/// The field's label can be set.
/// Not available on iOS.
/** @ingroup PIMConsts */
#define MA_PIM_ATTR_ORG_INFO_CUSTOM 1003
/// The constant describes a preferred field.
/** @ingroup PIMConsts */
#define MA_PIM_ATTRPREFERRED 0x10000
/// No error. The operation completed successfully.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_NONE 0

/// This function is unavailable on the current platform.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_UNAVAILABLE -1

/// The native database's data type for the given field did not match the MoSync API.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_NATIVE_TYPE_MISMATCH -2

/// The specified list type is invalid.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_LIST_TYPE_INVALID -3

/// The specified pim list is not available on the current platform.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_LIST_UNAVAILABLE -4

/// The specified list is already opened.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_LIST_ALREADY_OPENED -5

/// The specified field is invalid.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_FIELD_INVALID -6

/// The field type is not supported.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_FIELD_UNSUPPORTED -7

/// The requested field doesn't have a value.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_FIELD_EMPTY -8

/// More values in this field are not supported.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_FIELD_COUNT_MAX -9

/// The field is read-only.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_FIELD_READ_ONLY -10

/// The field is write-only.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_FIELD_WRITE_ONLY -11

/// The given index is not valid.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_INDEX_INVALID -12

/// Invalid handle.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_HANDLE_INVALID -13

/// The field/attribute combination is not supported.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_ATTRIBUTE_COMBO_UNSUPPORTED -14

/// The values's attribute is not set to custom.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_ATTRIBUTE_CUSTOM -15

/// Invalid buffer structure.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_BUFFER_INVALID -16

/// The value does not have a custom label.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_NO_LABEL -17

/// The operation is not allowed by the Address Book database.
/** @ingroup PIMConsts */
#define MA_PIM_ERR_OPERATION_NOT_PERMITTED -18
/**
* \brief Arguments for PIM functions.
*/
/** @ingroup PIMFunctions */
typedef struct MA_PIM_ARGS {
	/// Opened by maPimListNext().
	MAHandle item;

	/// One of the \link #MA_PIM_FIELD_CONTACT_ADDR MA_PIM_FIELD \endlink constants.
	int field;

	/// The address to a buffer, where a value is or will be stored.
	MAAddress buf;

	/// The size of the buffer, in bytes.
	int bufSize;
} MA_PIM_ARGS;
typedef struct MA_PIM_ARGSNative {
	/// Opened by maPimListNext().
	MAHandle item;

	/// One of the \link #MA_PIM_FIELD_CONTACT_ADDR MA_PIM_FIELD \endlink constants.
	int field;

	/// The address to a buffer, where a value is or will be stored.
	MAAddress buf;

	/// The size of the buffer, in bytes.
	int bufSize;
} MA_PIM_ARGSNative;

#define maExtensionFunctionInvoke_IX_PIM_caselist \

#define maExtensionFunctionInvoke_IX_PIM_syscall_caselist \

#define maIOCtl_IX_PIM_caselist \
maIOCtl_maPimListOpen_case(maPimListOpen) \
maIOCtl_maPimListNext_case(maPimListNext) \
maIOCtl_maPimListClose_case(maPimListClose) \
maIOCtl_maPimItemCount_case(maPimItemCount) \
maIOCtl_maPimItemGetField_case(maPimItemGetField) \
maIOCtl_maPimItemFieldCount_case(maPimItemFieldCount) \
maIOCtl_maPimItemGetAttributes_case(maPimItemGetAttributes) \
maIOCtl_maPimItemSetLabel_case(maPimItemSetLabel) \
maIOCtl_maPimItemGetLabel_case(maPimItemGetLabel) \
maIOCtl_maPimFieldType_case(maPimFieldType) \
maIOCtl_maPimItemGetValue_case(maPimItemGetValue) \
maIOCtl_maPimItemSetValue_case(maPimItemSetValue) \
maIOCtl_maPimItemAddValue_case(maPimItemAddValue) \
maIOCtl_maPimItemRemoveValue_case(maPimItemRemoveValue) \
maIOCtl_maPimItemClose_case(maPimItemClose) \
maIOCtl_maPimItemCreate_case(maPimItemCreate) \
maIOCtl_maPimItemRemove_case(maPimItemRemove) \

#define maIOCtl_IX_PIM_syscall_caselist \
maIOCtl_syscall_case(maPimListOpen) \
maIOCtl_syscall_case(maPimListNext) \
maIOCtl_syscall_case(maPimListClose) \
maIOCtl_syscall_case(maPimItemCount) \
maIOCtl_syscall_case(maPimItemGetField) \
maIOCtl_syscall_case(maPimItemFieldCount) \
maIOCtl_syscall_case(maPimItemGetAttributes) \
maIOCtl_syscall_case(maPimItemSetLabel) \
maIOCtl_syscall_case(maPimItemGetLabel) \
maIOCtl_syscall_case(maPimFieldType) \
maIOCtl_syscall_case(maPimItemGetValue) \
maIOCtl_syscall_case(maPimItemSetValue) \
maIOCtl_syscall_case(maPimItemAddValue) \
maIOCtl_syscall_case(maPimItemRemoveValue) \
maIOCtl_syscall_case(maPimItemClose) \
maIOCtl_syscall_case(maPimItemCreate) \
maIOCtl_syscall_case(maPimItemRemove) \

#define maIOCtl_maPimListOpen 95
#define maIOCtl_maPimListOpen_case(func) \
case 95: \
{ \
int _listType = a; \
return func(_listType); \
} \

#define maIOCtl_maPimListNext 96
#define maIOCtl_maPimListNext_case(func) \
case 96: \
{ \
MAHandle _list = (MAHandle)a; \
return func(_list); \
} \

#define maIOCtl_maPimListClose 97
#define maIOCtl_maPimListClose_case(func) \
case 97: \
{ \
MAHandle _list = (MAHandle)a; \
return func(_list); \
} \

#define maIOCtl_maPimItemCount 98
#define maIOCtl_maPimItemCount_case(func) \
case 98: \
{ \
MAHandle _item = (MAHandle)a; \
return func(_item); \
} \

#define maIOCtl_maPimItemGetField 99
#define maIOCtl_maPimItemGetField_case(func) \
case 99: \
{ \
MAHandle _item = (MAHandle)a; \
int _n = b; \
return func(_item, _n); \
} \

#define maIOCtl_maPimItemFieldCount 100
#define maIOCtl_maPimItemFieldCount_case(func) \
case 100: \
{ \
MAHandle _item = (MAHandle)a; \
int _field = b; \
return func(_item, _field); \
} \

#define maIOCtl_maPimItemGetAttributes 101
#define maIOCtl_maPimItemGetAttributes_case(func) \
case 101: \
{ \
MAHandle _item = (MAHandle)a; \
int _field = b; \
int _index = c; \
return func(_item, _field, _index); \
} \

#define maIOCtl_maPimItemSetLabel 102
#define maIOCtl_maPimItemSetLabel_case(func) \
case 102: \
{ \
const MA_PIM_ARGS* _args = GVMR(a, MA_PIM_ARGS); \
int _index = b; \
return func(_args, _index); \
} \

#define maIOCtl_maPimItemGetLabel 103
#define maIOCtl_maPimItemGetLabel_case(func) \
case 103: \
{ \
const MA_PIM_ARGS* _args = GVMR(a, MA_PIM_ARGS); \
int _index = b; \
return func(_args, _index); \
} \

#define maIOCtl_maPimFieldType 104
#define maIOCtl_maPimFieldType_case(func) \
case 104: \
{ \
MAHandle _list = (MAHandle)a; \
int _field = b; \
return func(_list, _field); \
} \

#define maIOCtl_maPimItemGetValue 105
#define maIOCtl_maPimItemGetValue_case(func) \
case 105: \
{ \
const MA_PIM_ARGS* _args = GVMR(a, MA_PIM_ARGS); \
int _index = b; \
return func(_args, _index); \
} \

#define maIOCtl_maPimItemSetValue 106
#define maIOCtl_maPimItemSetValue_case(func) \
case 106: \
{ \
const MA_PIM_ARGS* _args = GVMR(a, MA_PIM_ARGS); \
int _index = b; \
int _attributes = c; \
return func(_args, _index, _attributes); \
} \

#define maIOCtl_maPimItemAddValue 107
#define maIOCtl_maPimItemAddValue_case(func) \
case 107: \
{ \
const MA_PIM_ARGS* _args = GVMR(a, MA_PIM_ARGS); \
int _attributes = b; \
return func(_args, _attributes); \
} \

#define maIOCtl_maPimItemRemoveValue 108
#define maIOCtl_maPimItemRemoveValue_case(func) \
case 108: \
{ \
MAHandle _item = (MAHandle)a; \
int _field = b; \
int _index = c; \
return func(_item, _field, _index); \
} \

#define maIOCtl_maPimItemClose 109
#define maIOCtl_maPimItemClose_case(func) \
case 109: \
{ \
MAHandle _item = (MAHandle)a; \
return func(_item); \
} \

#define maIOCtl_maPimItemCreate 110
#define maIOCtl_maPimItemCreate_case(func) \
case 110: \
{ \
MAHandle _list = (MAHandle)a; \
return func(_list); \
} \

#define maIOCtl_maPimItemRemove 111
#define maIOCtl_maPimItemRemove_case(func) \
case 111: \
{ \
MAHandle _list = (MAHandle)a; \
MAHandle _item = (MAHandle)b; \
return func(_list, _item); \
} \


#endif	//IX_PIM_DEFS_H
