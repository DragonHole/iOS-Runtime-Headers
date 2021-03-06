/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@interface ICLegacyAccountUtilities : NSObject
+(BOOL)didChooseToMigrateAccountsForContext:(NoteContext*)arg1 forAccountPassingTest:(/*^block*/id)arg2 ;
+(NoteAccountObject*)legacyAccountForLegacyAccountType:(long long)arg1 context:(NoteContext*)arg2 ;
+(BOOL)didChooseToMigrateLegacyAccountType:(long long)arg1 ;
+(NoteAccountObject*)accountForAccountIdentifier:(id)arg1 context:(NoteContext*)arg2 ;
+(BOOL)didChooseToMigrateAccount:(NoteAccountObject*)arg1 context:(NoteContext*)arg2 ;
+(BOOL)isLegacyLocalAccount:(NoteAccountObject*)arg1 ;
+(NoteAccountObject*)legacyAccountForLocalAccountWithContext:(NoteContext*)arg1 ;
+(NoteAccountObject*)legacyAccountForPrimaryICloudAccountWithContext:(NoteContext*)arg1 ;
@end

