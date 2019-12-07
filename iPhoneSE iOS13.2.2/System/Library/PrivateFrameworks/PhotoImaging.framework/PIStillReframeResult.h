/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VNSaliencyImageObservation, NSArray;


@protocol PIStillReframeResult <NURenderResult>
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation; 
@property (nonatomic,copy,readonly) NSArray * ANODSubjects; 
@required
-(double)confidence;
-(CGRect)bounds;
-(VNSaliencyImageObservation *)saliencyObservation;
-(NSArray *)ANODSubjects;

@end
