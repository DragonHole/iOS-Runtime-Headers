/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLDictionarySerializableProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSString, NSNumber, PMLModelWeights, PMLModelLearningRates;

@interface PMLModelDescriptor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {

	NSString* _name;
	NSNumber* _version;
	PMLModelWeights* _weights;
	PMLModelLearningRates* _learningRates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * version;                                 //@synthesize version=_version - In the implementation block
@property (retain) PMLModelWeights * weights;                          //@synthesize weights=_weights - In the implementation block
@property (retain) PMLModelLearningRates * learningRates;              //@synthesize learningRates=_learningRates - In the implementation block
+(BOOL)isValidModelDescriptorInPlistMetadata:(id)arg1 withErrorDescription:(id*)arg2 ;
-(void)setWeights:(PMLModelWeights *)arg1 ;
-(PMLModelWeights *)weights;
-(id)toDictionary;
-(void)setLearningRates:(PMLModelLearningRates *)arg1 ;
-(PMLModelLearningRates *)learningRates;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initFromDictionary:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
@end
