/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDSwatchRenderingResult : NSObject {

	CGImageRef foreground;
	CGImageRef background;

}

@property (nonatomic,readonly) CGImageRef foreground; 
@property (nonatomic,readonly) CGImageRef background; 
+(id)renderingResultWithForeground:(CGImageRef)arg1 background:(CGImageRef)arg2 ;
-(void)dealloc;
-(CGImageRef)background;
-(CGImageRef)foreground;
@end

