/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDParagraph;

@interface WDRun : NSObject {

	WDParagraph* mParagraph;

}

@property (__weak,readonly) WDParagraph * paragraph; 
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)clearProperties;
-(WDParagraph *)paragraph;
-(id)initWithParagraph:(id)arg1 ;
-(int)runType;
@end
