/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASCFBurstTrie : NSObject {

	CFBurstTrieRef _trie;

}
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 range:(NSRange)arg2 ;
-(unsigned)payloadForUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)runBlockWithTrie:(/*^block*/id)arg1 ;
@end
