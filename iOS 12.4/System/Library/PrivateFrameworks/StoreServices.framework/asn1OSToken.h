/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/asn1Token.h>

@class asn1Token;

@interface asn1OSToken : asn1Token {

	asn1Token* mValue;

}

@property (readonly) asn1Token * value; 
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(void)dealloc;
-(id)stringValue;
-(asn1Token *)value;
@end
