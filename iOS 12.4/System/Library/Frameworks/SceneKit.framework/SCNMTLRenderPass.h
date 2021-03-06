/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNMTLRenderPass : NSObject {

	/*^block*/id setupBlock;
	/*^block*/id executeBlock;

}

@property (nonatomic,copy) id setupBlock; 
@property (nonatomic,copy) id executeBlock; 
-(void)setSetupBlock:(id)arg1 ;
-(id)executeBlock;
-(void)setup:(id)arg1 ;
-(void)setExecuteBlock:(id)arg1 ;
-(id)setupBlock;
-(void)dealloc;
-(void)execute:(id)arg1 ;
@end

