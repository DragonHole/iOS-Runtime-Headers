/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCXmlTextWriterProvider : NSObject {

	xmlTextWriterRef _textWriter;

}

@property (nonatomic,readonly) xmlTextWriterRef textWriter;              //@synthesize textWriter=_textWriter - In the implementation block
-(void)dealloc;
-(BOOL)tearDown;
-(BOOL)setUp;
-(BOOL)setUpWithTextWriter:(xmlTextWriterRef)arg1 ;
-(xmlTextWriterRef)textWriter;
@end

