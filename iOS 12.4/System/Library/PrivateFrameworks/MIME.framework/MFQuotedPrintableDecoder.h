/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {

	unsigned char _lastEncoded;
	unsigned long long _required;
	BOOL _forTextPart;
	BOOL _badlyEncoded;

}

@property (assign,nonatomic) BOOL forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
-(BOOL)forTextPart;
-(void)setForTextPart:(BOOL)arg1 ;
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

