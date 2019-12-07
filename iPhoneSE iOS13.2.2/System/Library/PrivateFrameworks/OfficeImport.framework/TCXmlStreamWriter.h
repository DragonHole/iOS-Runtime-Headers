/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class TCXmlTextWriterProvider, NSMutableSet;

@interface TCXmlStreamWriter : NSObject {

	TCXmlTextWriterProvider* mTextWriterProvider;
	unsigned mCurrentDepth;
	BOOL mContentAddedToTopElement;
	NSMutableSet* mAddedIds;

}
+(BOOL)startElementInStream:(xmlTextWriterRef)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
+(BOOL)endElementInStream:(xmlTextWriterRef)arg1 ;
+(BOOL)writeStringToStream:(xmlTextWriterRef)arg1 text:(id)arg2 ;
+(BOOL)writeAttributeToStream:(xmlTextWriterRef)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char*)arg5 ;
+(BOOL)writeNamespaceToStream:(xmlTextWriterRef)arg1 prefix:(id)arg2 uri:(const char*)arg3 ;
+(BOOL)writeDtdToStream:(xmlTextWriterRef)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5 ;
+(BOOL)writeAnchorTargetToStream:(xmlTextWriterRef)arg1 name:(id)arg2 ;
+(BOOL)startPlainElementInStream:(xmlTextWriterRef)arg1 name:(id)arg2 ;
+(BOOL)writePlainAttributeToStream:(xmlTextWriterRef)arg1 name:(id)arg2 content:(id)arg3 ;
+(id)newXmlStreamWriterWithZipEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
+(void)resetElementIds;
-(void)dealloc;
-(BOOL)tearDown;
-(BOOL)setUp;
-(BOOL)endElement;
-(BOOL)writeString:(id)arg1 ;
-(BOOL)isWriting;
-(xmlTextWriterRef)textWriter;
-(id)textWriterProvider;
-(BOOL)endElementsToDepth:(unsigned)arg1 ;
-(id)initWithTextWriterProvider:(id)arg1 ;
-(BOOL)startElement:(id)arg1 prefix:(id)arg2 ns:(const char*)arg3 ;
-(BOOL)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char*)arg5 ;
-(BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writePlainAttribute:(id)arg1 content:(id)arg2 ;
-(BOOL)contentAddedToTopElement;
-(BOOL)startPlainElement:(id)arg1 ;
-(unsigned)currentDepth;
-(BOOL)writePlainAttribute:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writePlainAttribute:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writePlainAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(BOOL)writeElementId:(id)arg1 ;
-(BOOL)writeNamespace:(id)arg1 uri:(const char*)arg2 ;
-(BOOL)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4 ;
-(BOOL)writeAnchorTarget:(id)arg1 ;
@end
