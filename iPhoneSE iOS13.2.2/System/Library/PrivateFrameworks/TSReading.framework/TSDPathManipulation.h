/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDPathManipulation : NSObject {

	TSDPathManipulation* mPrecedingManipulation;

}
-(void)dealloc;
-(CGPathRef)manipulatePath:(CGPathRef)arg1 withLineWidth:(double)arg2 ;
-(BOOL)canDecomposeRectIntoParts;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingManipulation:(id)arg4 ;
@end

