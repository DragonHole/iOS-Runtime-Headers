/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface wspHeader : NSObject {

	unsigned _msgid;
	unsigned _status;
	unsigned _checksum;
	unsigned _reserved2;

}

@property (assign) unsigned msgid;                  //@synthesize msgid=_msgid - In the implementation block
@property (assign) unsigned status;                 //@synthesize status=_status - In the implementation block
@property (assign) unsigned checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign) unsigned reserved2;              //@synthesize reserved2=_reserved2 - In the implementation block
-(id)init;
-(void)setMsgid:(unsigned)arg1 ;
-(unsigned)status;
-(unsigned)msgid;
-(unsigned)reserved2;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned)checksum;
-(void)setChecksum:(unsigned)arg1 ;
-(void)setReserved2:(unsigned)arg1 ;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
@end

