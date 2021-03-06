/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class wspHeader;

@interface wspFreeCursorOut : NSObject {

	unsigned _cursorsRemaining;
	wspHeader* _whdr;

}

@property (retain) wspHeader * whdr;                       //@synthesize whdr=_whdr - In the implementation block
@property (assign) unsigned cursorsRemaining;              //@synthesize cursorsRemaining=_cursorsRemaining - In the implementation block
-(id)init;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(wspHeader *)whdr;
-(void)setWhdr:(wspHeader *)arg1 ;
-(void)setCursorsRemaining:(unsigned)arg1 ;
-(unsigned)cursorsRemaining;
@end

