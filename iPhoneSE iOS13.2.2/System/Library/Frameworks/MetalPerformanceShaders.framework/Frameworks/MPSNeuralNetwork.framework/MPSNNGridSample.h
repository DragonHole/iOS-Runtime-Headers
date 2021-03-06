/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNGridSample : MPSCNNBinaryKernel {

	BOOL _useGridValueAsInputCoordinate;

}

@property (assign,nonatomic) BOOL useGridValueAsInputCoordinate;              //@synthesize useGridValueAsInputCoordinate=_useGridValueAsInputCoordinate - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)useGridValueAsInputCoordinate;
-(void)setUseGridValueAsInputCoordinate:(BOOL)arg1 ;
@end

