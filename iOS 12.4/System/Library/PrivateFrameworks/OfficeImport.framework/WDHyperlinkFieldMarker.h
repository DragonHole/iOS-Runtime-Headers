/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

@interface WDHyperlinkFieldMarker : WDFieldMarker {

	NSString* mLink;
	NSString* mFragment;
	unsigned mInternalLink : 1;

}

@property (nonatomic,retain) NSString * link; 
@property (nonatomic,retain) NSString * fragment; 
@property (assign,nonatomic) BOOL internalLink; 
-(BOOL)internalLink;
-(int)runType;
-(void)setInternalLink:(BOOL)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)fragment;
@end
