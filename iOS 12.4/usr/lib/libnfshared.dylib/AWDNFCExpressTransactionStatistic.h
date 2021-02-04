/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDNFCExpressTransactionStatistic : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _expressModeConfiguration;
	NSMutableArray* _transactionLists;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionLists;              //@synthesize transactionLists=_transactionLists - In the implementation block
@property (assign,nonatomic) BOOL hasExpressModeConfiguration; 
@property (assign,nonatomic) unsigned expressModeConfiguration;              //@synthesize expressModeConfiguration=_expressModeConfiguration - In the implementation block
+(Class)transactionListType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTransactionLists:(NSMutableArray *)arg1 ;
-(void)addTransactionList:(id)arg1 ;
-(unsigned long long)transactionListsCount;
-(void)clearTransactionLists;
-(id)transactionListAtIndex:(unsigned long long)arg1 ;
-(void)setExpressModeConfiguration:(unsigned)arg1 ;
-(void)setHasExpressModeConfiguration:(BOOL)arg1 ;
-(BOOL)hasExpressModeConfiguration;
-(NSMutableArray *)transactionLists;
-(unsigned)expressModeConfiguration;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
