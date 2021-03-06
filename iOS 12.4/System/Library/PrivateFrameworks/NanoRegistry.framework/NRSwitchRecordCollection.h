/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRPBSwitchRecordCollection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)addSwitchRecordWithHistoryEntry:(id)arg1 ;
-(void)truncateSwitchRecords;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(id)initWithHistoryEntries:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

