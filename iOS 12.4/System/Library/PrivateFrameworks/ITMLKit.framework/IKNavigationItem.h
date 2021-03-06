/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppDocument, NSDictionary;

@interface IKNavigationItem : NSObject {

	IKAppDocument* _document;
	NSDictionary* _options;

}

@property (nonatomic,retain) IKAppDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                //@synthesize options=_options - In the implementation block
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setDocument:(IKAppDocument *)arg1 ;
-(IKAppDocument *)document;
@end

