/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedRecognitionImage : CUINamedLookup

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize physicalSizeInMeters; 
@property (nonatomic,readonly) int exifOrientation; 
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CGSize)physicalSizeInMeters;
-(CGImageRef)image;
-(int)exifOrientation;
@end

