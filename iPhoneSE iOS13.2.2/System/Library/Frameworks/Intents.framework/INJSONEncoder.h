/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface INJSONEncoder : NSObject {

	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
-(NSString *)languageCode;
-(id)encodeObject:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodeObject:(id)arg1 withCodableDescription:(id)arg2 ;
-(id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2 ;
-(id)_encodeObject:(id)arg1 codableAttribute:(id)arg2 ;
@end

