/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned date : 1;
	unsigned publicationDate : 1;
	unsigned requiredExpirationDate : 1;
	unsigned soundAudioVolume : 1;
	unsigned soundMaximumDuration : 1;
	unsigned attachmentType : 1;
	unsigned sectionSubtype : 1;
	unsigned soundAlertType : 1;
	unsigned containsUpdatedAttachment : 1;
	unsigned hasCriticalIcon : 1;
	unsigned ignoresQuietMode : 1;
	unsigned loading : 1;
	unsigned soundShouldIgnoreRingerSwitch : 1;
	unsigned soundShouldRepeat : 1;
	unsigned turnsOnDisplay : 1;
} SCD_Struct_BL1;

typedef struct {
	unsigned subtypeID : 1;
	unsigned defaultSubtype : 1;
} SCD_Struct_BL2;

typedef struct {
	unsigned hour : 1;
	unsigned minute : 1;
	unsigned second : 1;
	unsigned weekday : 1;
} SCD_Struct_BL3;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned precomposed : 1;
} SCD_Struct_BL5;

typedef struct {
	unsigned alertType : 1;
	unsigned authorizationStatus : 1;
	unsigned groupingSetting : 1;
	unsigned lockScreenSetting : 1;
	unsigned notificationCenterLimit : 1;
	unsigned notificationCenterSetting : 1;
	unsigned phoneAuthorizationStatus : 1;
	unsigned pushSettings : 1;
	unsigned sectionCategory : 1;
	unsigned sectionType : 1;
	unsigned subsectionPriority : 1;
	unsigned suppressedSettings : 1;
	unsigned version : 1;
	unsigned allowsNotifications : 1;
	unsigned criticalAlertSetting : 1;
	unsigned displaysCriticalBulletins : 1;
	unsigned excludeFromBulletinBoard : 1;
	unsigned iconsStripped : 1;
	unsigned phoneAllowsNotifications : 1;
	unsigned showsInLockScreen : 1;
	unsigned showsInNotificationCenter : 1;
	unsigned showsMessagePreview : 1;
	unsigned showsOnExternalDevices : 1;
	unsigned suppressFromSettings : 1;
} SCD_Struct_BL6;

typedef struct {
	unsigned sequenceNumber : 1;
	unsigned sessionState : 1;
	unsigned isInitialSequenceNumber : 1;
} SCD_Struct_BL7;

