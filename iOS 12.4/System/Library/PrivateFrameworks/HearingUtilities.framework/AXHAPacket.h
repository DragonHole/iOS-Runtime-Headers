/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HearingUtilities/HearingUtilities-Structs.h>
@class NSMutableData;

@interface AXHAPacket : NSObject {

	unsigned long long _totalLength;
	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
+(id)packetDataWithPayload:(id)arg1 ;
+(SCD_Struct_AX1)headerFromData:(id)arg1 ;
+(id)packetWithHeader:(SCD_Struct_AX1)arg1 ;
-(id)initWithHeader:(SCD_Struct_AX1)arg1 ;
-(unsigned long long)missingLength;
-(id)dataPayload;
-(id)objectPayload;
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(id)appendData:(id)arg1 ;
@end

