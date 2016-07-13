/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/pokemongo-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol USContentUnitViewControllerDelegate;
@class UIWebView, UIView, UIButton, NSMutableDictionary, USContentUnit, USActionMap, NSArray, NSString;

@interface USContentUnitViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	UIView* _contentUnitView;
	UIButton* _closeButton;
	NSMutableDictionary* _viewData;
	double _loadingTimeout;
	double _timestamp;
	USContentUnit* _contentUnit;
	USActionMap* _actionMap;
	NSArray* _scopes;
	id<USContentUnitViewControllerDelegate> _delegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double loadingTimeout;                             //@synthesize loadingTimeout=_loadingTimeout - In the implementation block
@property (nonatomic,readonly) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) USContentUnit * contentUnit;                         //@synthesize contentUnit=_contentUnit - In the implementation block
@property (nonatomic,retain) USActionMap * actionMap;                             //@synthesize actionMap=_actionMap - In the implementation block
@property (nonatomic,copy) NSArray * scopes;                                      //@synthesize scopes=_scopes - In the implementation block
@property (__weak) id<USContentUnitViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                            //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) UIWebView * webView;                               //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) UIView * contentUnitView;                          //@synthesize contentUnitView=_contentUnitView - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * viewData;                    //@synthesize viewData=_viewData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(USActionMap *)actionMap;
-(USContentUnit *)contentUnit;
-(void)loadContentUnit:(id)arg1 actionMap:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)viewDataForKey:(id)arg1 ;
-(void)presentCloseButtonWithDelay:(double)arg1 ;
-(void)dismissControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissController:(id)arg1 ;
-(void)setContentUnit:(USContentUnit *)arg1 ;
-(void)setActionMap:(USActionMap *)arg1 ;
-(double)loadingTimeout;
-(void)adjustContentUnitToContainerSize:(CGSize)arg1 ;
-(void)setViewData:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)viewData;
-(void)handleDispatchURL:(id)arg1 ;
-(void)handleLoadContextWithCallback:(id)arg1 ;
-(void)updateViewDataWithDispatchContext:(id)arg1 ;
-(BOOL)sendCallback:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(id)JSONStringWithObject:(id)arg1 ;
-(UIView *)contentUnitView;
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id<USContentUnitViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<USContentUnitViewControllerDelegate>)delegate;
-(double)timestamp;
-(BOOL)prefersStatusBarHidden;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)scopes;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setScopes:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIWebView *)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIButton *)closeButton;
@end

