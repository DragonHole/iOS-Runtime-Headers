/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTArchiver : NSObject {

	archiveRef _archive;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)extractArchiveAtURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)closeArchive;
-(id)initWithOutputURL:(id)arg1 compress:(BOOL)arg2 ;
-(void)addDirectoryToArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg1 ;
@end

