/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface EQKitAdjustableSpace : NSObject {

	double mAscent;
	double mDescent;
	double mWidth;

}

@property (nonatomic,readonly) double ascent; 
@property (nonatomic,readonly) double descent; 
@property (nonatomic,readonly) double width; 
+(void)appendSpaceToAttributedString:(id)arg1 ascent:(double)arg2 descent:(double)arg3 width:(double)arg4 ;
+(CTRunDelegateRef)newRunDelegateWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3 ;
-(double)ascent;
-(double)descent;
-(id)initWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3 ;
-(double)width;
@end

