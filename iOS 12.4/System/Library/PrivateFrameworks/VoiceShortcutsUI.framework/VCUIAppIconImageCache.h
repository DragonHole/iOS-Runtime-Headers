/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface VCUIAppIconImageCache : NSObject {

	NSCache* _appIconImagesCache;

}

@property (nonatomic,retain) NSCache * appIconImagesCache;              //@synthesize appIconImagesCache=_appIconImagesCache - In the implementation block
+(id)sharedAppIconImageCache;
-(id)init;
-(NSCache *)appIconImagesCache;
-(void)setCachedAppIconImage:(id)arg1 forKey:(id)arg2 ;
-(id)cachedAppIconImageForKey:(id)arg1 ;
-(void)setAppIconImagesCache:(NSCache *)arg1 ;
@end
