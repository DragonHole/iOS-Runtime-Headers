/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {

	NSData* _data;
	NSURL* _url;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSString* _frameName;

}
-(void)dealloc;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(id)textEncodingName;
-(Class)_webResourceClass;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(id)frameName;
-(id)webResource;
@end

