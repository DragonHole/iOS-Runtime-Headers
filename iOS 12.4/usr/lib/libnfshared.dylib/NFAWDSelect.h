/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEAIDSelectEvent, NSData, NSString;

@interface NFAWDSelect : NSObject <NFAWDEventProtocol> {

	AWDNFCSEAIDSelectEvent* _metric;

}

@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) AWDNFCSEAIDSelectEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
-(void)setMetric:(AWDNFCSEAIDSelectEvent *)arg1 ;
-(AWDNFCSEAIDSelectEvent *)metric;
-(void)setAid:(NSData *)arg1 ;
-(NSData *)aid;
-(id)init;
-(void)dealloc;
@end
