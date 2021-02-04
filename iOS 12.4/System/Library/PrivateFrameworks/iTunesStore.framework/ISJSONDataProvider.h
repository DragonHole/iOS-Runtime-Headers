/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@interface ISJSONDataProvider : ISDataProvider {

	unsigned long long _options;

}

@property (assign) unsigned long long parserOptions;              //@synthesize options=_options - In the implementation block
-(unsigned long long)parserOptions;
-(void)setParserOptions:(unsigned long long)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
@end
