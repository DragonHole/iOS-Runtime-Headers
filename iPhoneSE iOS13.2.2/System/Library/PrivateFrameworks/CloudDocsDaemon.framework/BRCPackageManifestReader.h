/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSInputStream, PBMessageStreamReader, NSError;

@interface BRCPackageManifestReader : NSEnumerator {

	NSInputStream* _stream;
	PBMessageStreamReader* _reader;
	NSError* _error;

}

@property (assign,nonatomic) Class itemClass; 
-(id)init;
-(void)dealloc;
-(id)nextObject;
-(id)initWithURL:(id)arg1 ;
-(id)error;
-(void)done;
-(id)initWithAsset:(id)arg1 ;
-(Class)itemClass;
-(void)setItemClass:(Class)arg1 ;
-(id)initWithInputStream:(id)arg1 ;
-(id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2 ;
@end

