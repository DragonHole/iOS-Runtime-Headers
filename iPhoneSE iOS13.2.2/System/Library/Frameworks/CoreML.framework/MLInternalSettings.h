/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLInternalSettings : NSObject {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _restrictNeuralNetworksFromUsingANE;
	BOOL _isNeuralNetworkGPUPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                       //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (assign) BOOL restrictNeuralNetworksFromUsingANE;                       //@synthesize restrictNeuralNetworksFromUsingANE=_restrictNeuralNetworksFromUsingANE - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;              //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
+(id)globalSettings;
+(BOOL)deviceHasANE;
-(id)init;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(BOOL)restrictNeuralNetworksFromUsingANE;
-(void)setRestrictNeuralNetworksFromUsingANE:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
@end
