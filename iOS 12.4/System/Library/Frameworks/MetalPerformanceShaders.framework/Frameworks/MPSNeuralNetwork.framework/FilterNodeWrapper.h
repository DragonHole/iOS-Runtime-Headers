/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FilterNodeWrapper : NSObject <NSSecureCoding> {

	FilterGraphNode* node;

}
+(id)wrapperWithFilterNode:(FilterGraphNode*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithFilterNode:(FilterGraphNode*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FilterGraphNode*)node;
@end
