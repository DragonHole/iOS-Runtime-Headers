/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFWallpaperDirectoryDataStore.h>

@interface SBFWallpaperSharedDirectoryDataStore : SBFWallpaperDirectoryDataStore
+(id)defaultDirectoryURL;
-(id)wallpaperOptionsForVariant:(long long)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(id)directoryCreationAttributes;
-(void)didWriteFileToURL:(id)arg1 ;
-(id)wallpaperOptionsURLForVariant:(long long)arg1 ;
@end

