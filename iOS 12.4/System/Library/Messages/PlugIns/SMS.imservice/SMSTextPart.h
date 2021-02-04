/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface SMSTextPart : NSObject {

	NSString* _contentLocation;
	NSMutableString* _text;

}

@property (nonatomic,retain,readonly) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,retain,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
-(NSString *)contentLocation;
-(id)initWithContentLocation:(id)arg1 ;
-(void)appendText:(id)arg1 ;
-(void)dealloc;
-(NSString *)text;
@end
