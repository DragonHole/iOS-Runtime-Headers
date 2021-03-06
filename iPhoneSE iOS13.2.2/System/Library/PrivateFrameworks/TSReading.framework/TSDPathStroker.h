/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSUColor;

@interface TSDPathStroker : NSObject {

	TSUColor* mColor;
	double mWidth;
	TSDPathStroker* mPrecedingStroker;

}

@property (assign,nonatomic) double width; 
-(void)dealloc;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingStroker:(id)arg4 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 inColor:(id)arg3 ;
@end

