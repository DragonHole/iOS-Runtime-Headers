/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRPhoneTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _phoneFile;
	unsigned char _maxPhoneNumLength;
	unsigned char _minPhoneNumLength;

}

@property (nonatomic,readonly) unsigned char minPhoneNumLength;              //@synthesize minPhoneNumLength=_minPhoneNumLength - In the implementation block
@property (nonatomic,readonly) unsigned char maxPhoneNumLength;              //@synthesize maxPhoneNumLength=_maxPhoneNumLength - In the implementation block
-(id)initWithFile:(id)arg1 ;
-(unsigned char)minPhoneNumLength;
-(unsigned char)maxPhoneNumLength;
-(BOOL)lookupPhoneNumber:(id)arg1 idResult:(unsigned*)arg2 ;
-(void)dealloc;
@end

