/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDStreamDataSequenceNumber, HMDStreamData, NSString, NSMutableData, NSNumber;

@interface HMDStreamDataChunkAssembler : HMFObject {

	HMDStreamDataSequenceNumber* _dataSequenceNumber;
	HMDStreamData* _assembledData;
	NSString* _type;
	NSMutableData* _data;
	NSNumber* _currentSequenceNumber;

}

@property (copy,readonly) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSMutableData * data;                                          //@synthesize data=_data - In the implementation block
@property (copy) NSNumber * currentSequenceNumber;                                       //@synthesize currentSequenceNumber=_currentSequenceNumber - In the implementation block
@property (copy) HMDStreamData * assembledData;                                          //@synthesize assembledData=_assembledData - In the implementation block
@property (copy,readonly) HMDStreamDataSequenceNumber * dataSequenceNumber;              //@synthesize dataSequenceNumber=_dataSequenceNumber - In the implementation block
-(NSString *)type;
-(NSMutableData *)data;
-(id)attributeDescriptions;
-(HMDStreamDataSequenceNumber *)dataSequenceNumber;
-(BOOL)addDataChunk:(id)arg1 error:(id*)arg2 ;
-(id)initWithDataSequenceNumber:(id)arg1 initialStreamDataChunk:(id)arg2 ;
-(HMDStreamData *)assembledData;
-(void)createAssembledDataIfNecessaryForDataChunk:(id)arg1 ;
-(NSNumber *)currentSequenceNumber;
-(void)setCurrentSequenceNumber:(NSNumber *)arg1 ;
-(void)setAssembledData:(HMDStreamData *)arg1 ;
@end
