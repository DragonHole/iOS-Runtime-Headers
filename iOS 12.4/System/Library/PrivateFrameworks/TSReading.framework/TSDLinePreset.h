/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject {

	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;
	TSDStroke* mStroke;

}

@property (nonatomic,copy,readonly) TSDLineEnd * headLineEnd; 
@property (nonatomic,copy,readonly) TSDLineEnd * tailLineEnd; 
@property (nonatomic,copy,readonly) TSDStroke * stroke; 
+(id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(TSDStroke *)stroke;
@end

