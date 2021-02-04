/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKVersionedDocument : NSObject {

	Document* _documentArchive;

}

@property (assign,nonatomic) Document* documentArchive;                            //@synthesize documentArchive=_documentArchive - In the implementation block
@property (nonatomic,readonly) unsigned long long futureVersionCount; 
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
+(unsigned)versionedDocumentSerializationVersion;
-(void)saveToArchive:(Document*)arg1 ;
-(id)initWithUnzippedData:(id)arg1 ;
-(void)loadUnzippedData:(id)arg1 ;
-(unsigned long long)mergeWithVersionedDocument:(id)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(void)loadData:(id)arg1 ;
-(void)loadDocumentArchive:(Document*)arg1 ;
-(Document*)documentArchive;
-(void)saveCurrentVersion:(Version*)arg1 ;
-(unsigned long long)futureVersionCount;
-(unsigned)maxDocumentVersion;
-(void)setDocumentArchive:(Document*)arg1 ;
-(void)loadArchive:(const Document*)arg1 ;
-(id)serialize;
-(id)initWithArchive:(const Document*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end
