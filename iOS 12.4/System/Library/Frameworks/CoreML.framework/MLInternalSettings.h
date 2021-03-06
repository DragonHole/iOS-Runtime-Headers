/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLInternalSettings : NSObject {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _restrictNeuralNetworksToUseNonEnergyEfficientMode;
	BOOL _experimentalMode;
	BOOL _isNeuralNetworkGPUPathForbidden;
	BOOL _isNeuralNetworkEnergyEfficientPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                                   //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (assign) BOOL restrictNeuralNetworksToUseNonEnergyEfficientMode;                    //@synthesize restrictNeuralNetworksToUseNonEnergyEfficientMode=_restrictNeuralNetworksToUseNonEnergyEfficientMode - In the implementation block
@property (assign) BOOL experimentalMode;                                                     //@synthesize experimentalMode=_experimentalMode - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;                          //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkEnergyEfficientPathForbidden;              //@synthesize isNeuralNetworkEnergyEfficientPathForbidden=_isNeuralNetworkEnergyEfficientPathForbidden - In the implementation block
+(id)globalSettings;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(BOOL)restrictNeuralNetworksToUseNonEnergyEfficientMode;
-(BOOL)experimentalMode;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(void)setRestrictNeuralNetworksToUseNonEnergyEfficientMode:(BOOL)arg1 ;
-(void)setExperimentalMode:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
-(BOOL)isNeuralNetworkEnergyEfficientPathForbidden;
-(id)init;
@end

