/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/ETOptimizerDef.h>

@interface ETOptimizerDefSGD : ETOptimizerDef {

	float _lr;
	float _lr_decay_epoch;
	float _momentum;
	float _weight_decay;

}

@property (assign) float lr;                          //@synthesize lr=_lr - In the implementation block
@property (assign) float lr_decay_epoch;              //@synthesize lr_decay_epoch=_lr_decay_epoch - In the implementation block
@property (assign) float momentum;                    //@synthesize momentum=_momentum - In the implementation block
@property (assign) float weight_decay;                //@synthesize weight_decay=_weight_decay - In the implementation block
-(id)init;
-(float)momentum;
-(void)setMomentum:(float)arg1 ;
-(float)lr;
-(void)setLr:(float)arg1 ;
-(float)lr_decay_epoch;
-(void)setLr_decay_epoch:(float)arg1 ;
-(float)weight_decay;
-(void)setWeight_decay:(float)arg1 ;
@end

