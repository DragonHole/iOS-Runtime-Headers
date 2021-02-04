/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKDOMNamedNodeMap;


@protocol IKJSDOMElement <JSExport>
@property (nonatomic,retain,readonly) NSString * tagName; 
@property (nonatomic,copy,readonly) IKDOMNamedNodeMap * attributes; 
@required
-(BOOL)hasAttributes;
-(void)setAttribute:(id)arg1 :(id)arg2;
-(BOOL)hasAttribute:(id)arg1;
-(void)removeAttribute:(id)arg1;
-(IKDOMNamedNodeMap *)attributes;
-(NSString *)tagName;
-(id)getElementsByTagName:(id)arg1;
-(id)getAttribute:(id)arg1;

@end
