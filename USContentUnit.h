/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <pokemongo/pokemongo-Structs.h>
@class NSURL, NSDictionary, NSNumber;

@interface USContentUnit : NSObject {

	BOOL _fullScreen;
	NSURL* _templateURL;
	NSDictionary* _context;
	NSNumber* _contentID;
	CGRect _portraitFrame;
	CGRect _landscapeFrame;

}

@property (nonatomic,readonly) NSURL * templateURL;                              //@synthesize templateURL=_templateURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * context;                           //@synthesize context=_context - In the implementation block
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen;              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (nonatomic,readonly) NSNumber * contentID;                             //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) CGRect portraitFrame;                             //@synthesize portraitFrame=_portraitFrame - In the implementation block
@property (nonatomic,readonly) CGRect landscapeFrame;                            //@synthesize landscapeFrame=_landscapeFrame - In the implementation block
-(NSURL *)templateURL;
-(CGRect)frameForContainerSize:(CGSize)arg1 ;
-(CGRect)portraitFrame;
-(CGRect)landscapeFrame;
-(NSNumber *)contentID;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)context;
-(BOOL)isFullScreen;
@end
