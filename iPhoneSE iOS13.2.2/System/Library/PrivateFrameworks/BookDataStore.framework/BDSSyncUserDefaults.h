/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSSyncUserDefaults : NSObject
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)_isBundleIdentifierInArray:(CFArrayRef)arg1 ;
+(BOOL)isSignedIntoICloud;
+(BOOL)isCloudKitSyncOptedIn;
+(id)iCloudIdentity;
+(BOOL)_isServiceEnabledAlternative:(CFStringRef)arg1 ;
+(BOOL)_isServiceDisabledAlternative:(CFStringRef)arg1 ;
+(void)_setService:(CFStringRef)arg1 enabled:(BOOL)arg2 ;
@end
