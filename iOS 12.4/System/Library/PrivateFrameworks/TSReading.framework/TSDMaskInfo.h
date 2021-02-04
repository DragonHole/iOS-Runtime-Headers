/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSReading/TSDMixing.h>

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing> {

	TSDPathSource* mPathSource;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(TSDPathSource *)pathSource;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGeometry:(id)arg1 ;
@end
