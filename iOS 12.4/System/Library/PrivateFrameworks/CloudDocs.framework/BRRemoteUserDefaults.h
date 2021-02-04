/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject {

	NSMutableDictionary* _userDictionaryCache;

}

@property (nonatomic,readonly) NSSet * excludedFilenamesWorthWarningAtLogout; 
@property (nonatomic,readonly) NSSet * excludedExtensionsWorthPreserving; 
@property (nonatomic,readonly) long long minFileSizeForThumbnailTransfer; 
+(id)defaultExcludedFilenamesWorthWarningAtLogout;
+(id)defaultExcludedFilenamesWorthPreserving;
+(id)defaultExcludedExtensionsWorthPreserving;
+(id)sharedDefaults;
-(long long)minFileSizeForThumbnailTransfer;
-(NSSet *)excludedExtensionsWorthPreserving;
-(NSSet *)excludedFilenamesWorthWarningAtLogout;
-(id)init;
-(id)_init;
@end
