/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontKerning : NSObject <CPDisposable> {

	CFDataRef kernTable;
	const char* dataPtr;
	unsigned offset;
	unsigned kernTableLength;
	CFDictionaryRef kernDictionary;
	BOOL override;
	BOOL valid;

}
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(id)initWithKernData:(CFDataRef)arg1 ;
-(unsigned short)readUnsignedShort;
-(void)doKerningPair;
-(void)doSubtableFormat0;
-(void)doSubtableFormat1;
-(void)doSubtableFormat2;
-(void)doSubtableFormat3;
-(void)doOTSubtable;
-(void)doTTSubtable;
-(void)doTable;
-(id)initWithCGFont:(CGFontRef)arg1 ;
-(short)readShort;
-(CFDictionaryRef)createKernTable;
@end

