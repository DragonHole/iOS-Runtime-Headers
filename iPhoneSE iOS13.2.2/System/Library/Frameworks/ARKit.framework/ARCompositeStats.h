/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARCompositeStats : NSObject {

	unsigned long long _vsyncCount;
	double _vsyncStart;
	double _vsyncEnd;
	double _vsyncTime;
	double _vsyncTimeActual;
	double _compositeStart;
	double _compositeEndCPU;
	double _compositeTimeCPU;
	double _compositeEnd;
	double _compositeTime;
	double _compositeStartTarget;
	double _compositeStartTargetTimeBeforeVsyncEnd;
	double _compositePresent;

}

@property (nonatomic,readonly) unsigned long long vsyncCount;                            //@synthesize vsyncCount=_vsyncCount - In the implementation block
@property (nonatomic,readonly) double vsyncStart;                                        //@synthesize vsyncStart=_vsyncStart - In the implementation block
@property (nonatomic,readonly) double vsyncEnd;                                          //@synthesize vsyncEnd=_vsyncEnd - In the implementation block
@property (nonatomic,readonly) double vsyncTime;                                         //@synthesize vsyncTime=_vsyncTime - In the implementation block
@property (nonatomic,readonly) double vsyncTimeActual;                                   //@synthesize vsyncTimeActual=_vsyncTimeActual - In the implementation block
@property (nonatomic,readonly) double compositeStart;                                    //@synthesize compositeStart=_compositeStart - In the implementation block
@property (nonatomic,readonly) double compositeEndCPU;                                   //@synthesize compositeEndCPU=_compositeEndCPU - In the implementation block
@property (nonatomic,readonly) double compositeTimeCPU;                                  //@synthesize compositeTimeCPU=_compositeTimeCPU - In the implementation block
@property (nonatomic,readonly) double compositeEnd;                                      //@synthesize compositeEnd=_compositeEnd - In the implementation block
@property (nonatomic,readonly) double compositeTime;                                     //@synthesize compositeTime=_compositeTime - In the implementation block
@property (assign,nonatomic) double compositeStartTarget;                                //@synthesize compositeStartTarget=_compositeStartTarget - In the implementation block
@property (assign,nonatomic) double compositeStartTargetTimeBeforeVsyncEnd;              //@synthesize compositeStartTargetTimeBeforeVsyncEnd=_compositeStartTargetTimeBeforeVsyncEnd - In the implementation block
@property (assign,nonatomic) double compositePresent;                                    //@synthesize compositePresent=_compositePresent - In the implementation block
-(id)description;
-(double)vsyncTime;
-(double)vsyncEnd;
-(void)startComposite;
-(void)endComposite:(double)arg1 ;
-(double)compositeTime;
-(void)setCompositePresent:(double)arg1 ;
-(void)endCompositeCPU;
-(double)compositeStartTarget;
-(void)tickComposite:(id)arg1 vsyncCounter:(unsigned long long)arg2 ;
-(void)setCompositeStartTarget:(double)arg1 ;
-(void)setCompositeStartTargetTimeBeforeVsyncEnd:(double)arg1 ;
-(double)vsyncStart;
-(double)compositeStartTargetTimeBeforeVsyncEnd;
-(unsigned long long)vsyncCount;
-(double)vsyncTimeActual;
-(double)compositeStart;
-(double)compositeEndCPU;
-(double)compositeTimeCPU;
-(double)compositeEnd;
-(double)compositePresent;
@end

