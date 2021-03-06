/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAFrame;

@interface SAPAStyleFrame : NSObject {

	SAFrame* _frame;

}

@property (retain) SAFrame * frame;              //@synthesize frame=_frame - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA2*)arg1 bufferLength:(unsigned long long)arg2 ;
-(SAFrame *)frame;
-(void)setFrame:(SAFrame *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA2*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
@end

