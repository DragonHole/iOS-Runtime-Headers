/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@interface ISJSONDataProvider : ISDataProvider {

	unsigned long long _options;

}

@property (assign) unsigned long long parserOptions;              //@synthesize options=_options - In the implementation block
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(unsigned long long)parserOptions;
-(void)setParserOptions:(unsigned long long)arg1 ;
@end

