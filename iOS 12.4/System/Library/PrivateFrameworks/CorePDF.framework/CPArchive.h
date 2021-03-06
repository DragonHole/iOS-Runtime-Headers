/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class NSMutableString, NSData;

@interface CPArchive : NSObject <CPDisposable> {

	CFArrayRef selections;
	CFArrayRef imageNodes;
	NSMutableString* plainText;
	NSMutableString* htmlString;
	NSMutableString* htmlStringNoImages;
	NSData* webArchiveData;

}
-(id)webArchiveData;
-(id)html;
-(void)addSelection:(CGPDFSelectionRef)arg1 ;
-(void)dispose;
-(void)finalize;
-(id)plainText;
-(id)init;
-(void)dealloc;
@end

