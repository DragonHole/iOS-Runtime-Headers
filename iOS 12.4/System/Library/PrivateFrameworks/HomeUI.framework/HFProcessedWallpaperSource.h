/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HFProcessedWallpaperSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * supportedVariants; 
@property (nonatomic,readonly) unsigned long long processVersionNumber; 
@required
-(id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
-(NSArray *)supportedVariants;
-(unsigned long long)processVersionNumber;

@end

